// Auto-generated. Do not edit!

// (in-package plant_arm_project.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------


//-----------------------------------------------------------

class PlantLocationRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.loc = null;
    }
    else {
      if (initObj.hasOwnProperty('loc')) {
        this.loc = initObj.loc
      }
      else {
        this.loc = new geometry_msgs.msg.Vector3();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PlantLocationRequest
    // Serialize message field [loc]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.loc, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PlantLocationRequest
    let len;
    let data = new PlantLocationRequest(null);
    // Deserialize message field [loc]
    data.loc = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'plant_arm_project/PlantLocationRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fb0dc5489379f237f7e1998a10d754a3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Vector3 loc
    
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
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PlantLocationRequest(null);
    if (msg.loc !== undefined) {
      resolved.loc = geometry_msgs.msg.Vector3.Resolve(msg.loc)
    }
    else {
      resolved.loc = new geometry_msgs.msg.Vector3()
    }

    return resolved;
    }
};

class PlantLocationResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sucess = null;
    }
    else {
      if (initObj.hasOwnProperty('sucess')) {
        this.sucess = initObj.sucess
      }
      else {
        this.sucess = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PlantLocationResponse
    // Serialize message field [sucess]
    bufferOffset = _serializer.int64(obj.sucess, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PlantLocationResponse
    let len;
    let data = new PlantLocationResponse(null);
    // Deserialize message field [sucess]
    data.sucess = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'plant_arm_project/PlantLocationResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4e3fb0f8e6a0a6dee863e25b851d1aa7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 sucess
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PlantLocationResponse(null);
    if (msg.sucess !== undefined) {
      resolved.sucess = msg.sucess;
    }
    else {
      resolved.sucess = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: PlantLocationRequest,
  Response: PlantLocationResponse,
  md5sum() { return '16118a8f43cad3bb5033f2cceac3aadb'; },
  datatype() { return 'plant_arm_project/PlantLocation'; }
};
