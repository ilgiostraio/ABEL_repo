import cv2

from emautionanalysis import StaticModel

img_path = "C:\\Users\\FACETeam\\Desktop\\EMOTIVA\\rob.jpg"
img = cv2.imread(img_path)

model = StaticModel(model_name="cnn_model")
print(model.predict_emotions(img=img))
