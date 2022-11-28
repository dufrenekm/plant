;; Auto-generated. Do not edit!


(when (boundp 'plant_arm_project::PlantLocation)
  (if (not (find-package "PLANT_ARM_PROJECT"))
    (make-package "PLANT_ARM_PROJECT"))
  (shadow 'PlantLocation (find-package "PLANT_ARM_PROJECT")))
(unless (find-package "PLANT_ARM_PROJECT::PLANTLOCATION")
  (make-package "PLANT_ARM_PROJECT::PLANTLOCATION"))
(unless (find-package "PLANT_ARM_PROJECT::PLANTLOCATIONREQUEST")
  (make-package "PLANT_ARM_PROJECT::PLANTLOCATIONREQUEST"))
(unless (find-package "PLANT_ARM_PROJECT::PLANTLOCATIONRESPONSE")
  (make-package "PLANT_ARM_PROJECT::PLANTLOCATIONRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass plant_arm_project::PlantLocationRequest
  :super ros::object
  :slots (_loc ))

(defmethod plant_arm_project::PlantLocationRequest
  (:init
   (&key
    ((:loc __loc) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _loc __loc)
   self)
  (:loc
   (&rest __loc)
   (if (keywordp (car __loc))
       (send* _loc __loc)
     (progn
       (if __loc (setq _loc (car __loc)))
       _loc)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Vector3 _loc
    (send _loc :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Vector3 _loc
       (send _loc :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Vector3 _loc
     (send _loc :deserialize buf ptr-) (incf ptr- (send _loc :serialization-length))
   ;;
   self)
  )

(defclass plant_arm_project::PlantLocationResponse
  :super ros::object
  :slots (_sucess ))

(defmethod plant_arm_project::PlantLocationResponse
  (:init
   (&key
    ((:sucess __sucess) 0)
    )
   (send-super :init)
   (setq _sucess (round __sucess))
   self)
  (:sucess
   (&optional __sucess)
   (if __sucess (setq _sucess __sucess)) _sucess)
  (:serialization-length
   ()
   (+
    ;; int64 _sucess
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _sucess
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _sucess (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _sucess) (= (length (_sucess . bv)) 2)) ;; bignum
              (write-long (ash (elt (_sucess . bv) 0) 0) s)
              (write-long (ash (elt (_sucess . bv) 1) -1) s))
             ((and (class _sucess) (= (length (_sucess . bv)) 1)) ;; big1
              (write-long (elt (_sucess . bv) 0) s)
              (write-long (if (>= _sucess 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _sucess s)(write-long (if (>= _sucess 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _sucess
#+(or :alpha :irix6 :x86_64)
      (setf _sucess (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _sucess (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass plant_arm_project::PlantLocation
  :super ros::object
  :slots ())

(setf (get plant_arm_project::PlantLocation :md5sum-) "16118a8f43cad3bb5033f2cceac3aadb")
(setf (get plant_arm_project::PlantLocation :datatype-) "plant_arm_project/PlantLocation")
(setf (get plant_arm_project::PlantLocation :request) plant_arm_project::PlantLocationRequest)
(setf (get plant_arm_project::PlantLocation :response) plant_arm_project::PlantLocationResponse)

(defmethod plant_arm_project::PlantLocationRequest
  (:response () (instance plant_arm_project::PlantLocationResponse :init)))

(setf (get plant_arm_project::PlantLocationRequest :md5sum-) "16118a8f43cad3bb5033f2cceac3aadb")
(setf (get plant_arm_project::PlantLocationRequest :datatype-) "plant_arm_project/PlantLocationRequest")
(setf (get plant_arm_project::PlantLocationRequest :definition-)
      "geometry_msgs/Vector3 loc

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
---
int64 sucess
")

(setf (get plant_arm_project::PlantLocationResponse :md5sum-) "16118a8f43cad3bb5033f2cceac3aadb")
(setf (get plant_arm_project::PlantLocationResponse :datatype-) "plant_arm_project/PlantLocationResponse")
(setf (get plant_arm_project::PlantLocationResponse :definition-)
      "geometry_msgs/Vector3 loc

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
---
int64 sucess
")



(provide :plant_arm_project/PlantLocation "16118a8f43cad3bb5033f2cceac3aadb")


