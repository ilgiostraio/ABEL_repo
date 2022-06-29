import matplotlib.pyplot as plt
import matplotlib.patches as patches
import matplotlib.gridspec as gridspec
import cv2
import numpy as np
from emautionanalysis import StaticModel
model_name = 'cnn_model'
extra_params = {
'face_detector':'mp',
}
model = StaticModel(model_name=model_name, extra_cfg=extra_params)

img_path = "C:\\Users\\komil\\Desktop\\EMOTIVA\\rob.jpg"
test_image = cv2.imread(img_path)

res = model.predict_emotions(img=test_image, return_aus=True,
return_landmarks=True)
if res is None:
    print('No face detected')
emotions_list, aus_list, global_landmarks_list = res
for i, _ in enumerate(aus_list):
    gs = gridspec.GridSpec(2, 2)
    plt.figure(figsize=(10, 5))
    ax = plt.subplot(gs[0, 0])
plt.title(f'{model_name}, subj {i}')
ax.set_xticks([])
ax.set_yticks([])
plt.imshow(test_image[:, :, ::-1])
face_rect, gl = global_landmarks_list[i]
h, w, c = test_image.shape
gl = np.array(gl)
tl, br = face_rect
tl = (tl[0] * w, tl[1] * h)
br = (br[0] * w, br[1] * h)
rect = patches.Rectangle(tl, br[0] - tl[0], br[1] - tl[1], linewidth=1,
edgecolor='r', facecolor='none')
ax.add_patch(rect)
plt.scatter(gl[:, 0] * w, gl[:, 1] * h, c='y', s=3.2)
ax = plt.subplot(gs[0, 1]) # row 0, col 1
plt.bar(range(len(emotions_list[i])), list(emotions_list[i].values()),
align='center',
tick_label=list(emotions_list[i].keys()))
plt.ylim([0, 1])
ax = plt.subplot(gs[1, :]) # row 1, span all columns
plt.bar(range(len(aus_list[i])), list(aus_list[i].values()),

align='center',
tick_label=list(aus_list[i].keys()))
plt.ylim([0, 1])
plt.show()
