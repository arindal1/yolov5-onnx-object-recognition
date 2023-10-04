# YOLOv5 Object Detection with OpenCV

This repository contains Python code demonstrating how to perform object detection using the YOLOv5 model and OpenCV. The YOLOv5 model weights are used in the ONNX format for inference.

## Overview

The code provided demonstrates loading a YOLOv5 model in ONNX format and using it to perform object detection on input images. The detections are visualized by drawing bounding boxes and labels around the detected objects.

## Prerequisites

- Python 3.x
- OpenCV (`cv2`)
- PyTorch (for model training, not needed for inference)
- COCO Names File (`coco.names`)
- YOLOv5 Model Weights (`yolov5s.onnx`)
- Input Image(s) for Testing

Run the [requirements.txt](requirements.txt)
```python
pip install -r requirements.txt  # install
```

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/arindal1/yolov5-onnx-object-recognition.git
  
   cd yolov5-onnx-object-recognition
   ```

2. Ensure you have the necessary model weights (`yolov5s.onnx`) and the COCO class names file (`coco.names`) in the appropriate locations.

3. Run the script to perform object detection on the provided sample image (`sample.jpg`):
   ```bash
   python object_detection.py
   ```

Modify the script to work with your own images.

4. Run the Steamlit app: `app.py`:
   ```python
   streamlit run app.py
   ```

## Acknowledgments

This project uses the YOLOv5 model and the COCO dataset. The model weights in ONNX format were obtained from the official YOLOv5 repository [Ultralytics](https://github.com/ultralytics/yolov5).

## Contributions

Contributions to this repo is very welcome. Any issues, features or changes you want to add, fork this repo and make your pull requests accordingly.

**For more infomation about contributions, please refer to [CONTRIBUTIONS.md](CONTRIBUTIONS.md).**
