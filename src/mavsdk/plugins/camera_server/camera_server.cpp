// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/camera_server/camera_server.proto)

#include <iomanip>

#include "camera_server_impl.h"
#include "plugins/camera_server/camera_server.h"

namespace mavsdk {

using Information = CameraServer::Information;
using VideoStreamSettings = CameraServer::VideoStreamSettings;
using VideoStreamInfo = CameraServer::VideoStreamInfo;
using Position = CameraServer::Position;
using Quaternion = CameraServer::Quaternion;
using CaptureInfo = CameraServer::CaptureInfo;

using StorageInformation = CameraServer::StorageInformation;
using CaptureStatus = CameraServer::CaptureStatus;
using Settings = CameraServer::Settings;

CameraServer::CameraServer(std::shared_ptr<ServerComponent> server_component) :
    ServerPluginBase(),
    _impl{std::make_unique<CameraServerImpl>(server_component)}
{}

CameraServer::~CameraServer() {}

CameraServer::Result CameraServer::set_information(Information information) const
{
    return _impl->set_information(information);
}

CameraServer::Result
CameraServer::set_video_stream_info(std::vector<VideoStreamInfo> video_stream_infos) const
{
    return _impl->set_video_stream_info(video_stream_infos);
}

CameraServer::Result CameraServer::set_in_progress(bool in_progress) const
{
    return _impl->set_in_progress(in_progress);
}

CameraServer::TakePhotoHandle CameraServer::subscribe_take_photo(const TakePhotoCallback& callback)
{
    return _impl->subscribe_take_photo(callback);
}

void CameraServer::unsubscribe_take_photo(TakePhotoHandle handle)
{
    _impl->unsubscribe_take_photo(handle);
}

CameraServer::Result
CameraServer::respond_take_photo(CameraFeedback take_photo_feedback, CaptureInfo capture_info) const
{
    return _impl->respond_take_photo(take_photo_feedback, capture_info);
}

CameraServer::StartVideoHandle
CameraServer::subscribe_start_video(const StartVideoCallback& callback)
{
    return _impl->subscribe_start_video(callback);
}

void CameraServer::unsubscribe_start_video(StartVideoHandle handle)
{
    _impl->unsubscribe_start_video(handle);
}

CameraServer::Result CameraServer::respond_start_video(CameraFeedback start_video_feedback) const
{
    return _impl->respond_start_video(start_video_feedback);
}

CameraServer::StopVideoHandle CameraServer::subscribe_stop_video(const StopVideoCallback& callback)
{
    return _impl->subscribe_stop_video(callback);
}

void CameraServer::unsubscribe_stop_video(StopVideoHandle handle)
{
    _impl->unsubscribe_stop_video(handle);
}

CameraServer::Result CameraServer::respond_stop_video(CameraFeedback stop_video_feedback) const
{
    return _impl->respond_stop_video(stop_video_feedback);
}

CameraServer::StartVideoStreamingHandle
CameraServer::subscribe_start_video_streaming(const StartVideoStreamingCallback& callback)
{
    return _impl->subscribe_start_video_streaming(callback);
}

void CameraServer::unsubscribe_start_video_streaming(StartVideoStreamingHandle handle)
{
    _impl->unsubscribe_start_video_streaming(handle);
}

CameraServer::Result
CameraServer::respond_start_video_streaming(CameraFeedback start_video_streaming_feedback) const
{
    return _impl->respond_start_video_streaming(start_video_streaming_feedback);
}

CameraServer::StopVideoStreamingHandle
CameraServer::subscribe_stop_video_streaming(const StopVideoStreamingCallback& callback)
{
    return _impl->subscribe_stop_video_streaming(callback);
}

void CameraServer::unsubscribe_stop_video_streaming(StopVideoStreamingHandle handle)
{
    _impl->unsubscribe_stop_video_streaming(handle);
}

CameraServer::Result
CameraServer::respond_stop_video_streaming(CameraFeedback stop_video_streaming_feedback) const
{
    return _impl->respond_stop_video_streaming(stop_video_streaming_feedback);
}

CameraServer::SetModeHandle CameraServer::subscribe_set_mode(const SetModeCallback& callback)
{
    return _impl->subscribe_set_mode(callback);
}

void CameraServer::unsubscribe_set_mode(SetModeHandle handle)
{
    _impl->unsubscribe_set_mode(handle);
}

CameraServer::Result CameraServer::respond_set_mode(CameraFeedback set_mode_feedback) const
{
    return _impl->respond_set_mode(set_mode_feedback);
}

CameraServer::StorageInformationHandle
CameraServer::subscribe_storage_information(const StorageInformationCallback& callback)
{
    return _impl->subscribe_storage_information(callback);
}

void CameraServer::unsubscribe_storage_information(StorageInformationHandle handle)
{
    _impl->unsubscribe_storage_information(handle);
}

CameraServer::Result CameraServer::respond_storage_information(
    CameraFeedback storage_information_feedback, StorageInformation storage_information) const
{
    return _impl->respond_storage_information(storage_information_feedback, storage_information);
}

CameraServer::CaptureStatusHandle
CameraServer::subscribe_capture_status(const CaptureStatusCallback& callback)
{
    return _impl->subscribe_capture_status(callback);
}

void CameraServer::unsubscribe_capture_status(CaptureStatusHandle handle)
{
    _impl->unsubscribe_capture_status(handle);
}

CameraServer::Result CameraServer::respond_capture_status(
    CameraFeedback capture_status_feedback, CaptureStatus capture_status) const
{
    return _impl->respond_capture_status(capture_status_feedback, capture_status);
}

CameraServer::FormatStorageHandle
CameraServer::subscribe_format_storage(const FormatStorageCallback& callback)
{
    return _impl->subscribe_format_storage(callback);
}

void CameraServer::unsubscribe_format_storage(FormatStorageHandle handle)
{
    _impl->unsubscribe_format_storage(handle);
}

CameraServer::Result
CameraServer::respond_format_storage(CameraFeedback format_storage_feedback) const
{
    return _impl->respond_format_storage(format_storage_feedback);
}

CameraServer::ResetSettingsHandle
CameraServer::subscribe_reset_settings(const ResetSettingsCallback& callback)
{
    return _impl->subscribe_reset_settings(callback);
}

void CameraServer::unsubscribe_reset_settings(ResetSettingsHandle handle)
{
    _impl->unsubscribe_reset_settings(handle);
}

CameraServer::Result
CameraServer::respond_reset_settings(CameraFeedback reset_settings_feedback) const
{
    return _impl->respond_reset_settings(reset_settings_feedback);
}

CameraServer::SettingsHandle CameraServer::subscribe_settings(const SettingsCallback& callback)
{
    return _impl->subscribe_settings(callback);
}

void CameraServer::unsubscribe_settings(SettingsHandle handle)
{
    _impl->unsubscribe_settings(handle);
}

CameraServer::Result CameraServer::respond_settings(Settings settings) const
{
    return _impl->respond_settings(settings);
}

CameraServer::SystemTimeHandle
CameraServer::subscribe_system_time(const SystemTimeCallback& callback)
{
    return _impl->subscribe_system_time(callback);
}

void CameraServer::unsubscribe_system_time(SystemTimeHandle handle)
{
    _impl->unsubscribe_system_time(handle);
}

CameraServer::Result CameraServer::respond_system_time(CameraFeedback system_time_feedback) const
{
    return _impl->respond_system_time(system_time_feedback);
}

std::ostream&
operator<<(std::ostream& str, CameraServer::Information::CameraCapFlags const& camera_cap_flags)
{
    switch (camera_cap_flags) {
        case CameraServer::Information::CameraCapFlags::CaptureVideo:
            return str << "Capture Video";
        case CameraServer::Information::CameraCapFlags::CaptureImage:
            return str << "Capture Image";
        case CameraServer::Information::CameraCapFlags::HasModes:
            return str << "Has Modes";
        case CameraServer::Information::CameraCapFlags::CanCaptureImageInVideoMode:
            return str << "Can Capture Image In Video Mode";
        case CameraServer::Information::CameraCapFlags::CanCaptureVideoInImageMode:
            return str << "Can Capture Video In Image Mode";
        case CameraServer::Information::CameraCapFlags::HasImageSurveyMode:
            return str << "Has Image Survey Mode";
        case CameraServer::Information::CameraCapFlags::HasBasicZoom:
            return str << "Has Basic Zoom";
        case CameraServer::Information::CameraCapFlags::HasBasicFocus:
            return str << "Has Basic Focus";
        case CameraServer::Information::CameraCapFlags::HasVideoStream:
            return str << "Has Video Stream";
        case CameraServer::Information::CameraCapFlags::HasTrackingPoint:
            return str << "Has Tracking Point";
        case CameraServer::Information::CameraCapFlags::HasTrackingRectangle:
            return str << "Has Tracking Rectangle";
        case CameraServer::Information::CameraCapFlags::HasTrackingGeoStatus:
            return str << "Has Tracking Geo Status";
        default:
            return str << "Unknown";
    }
}
bool operator==(const CameraServer::Information& lhs, const CameraServer::Information& rhs)
{
    return (rhs.vendor_name == lhs.vendor_name) && (rhs.model_name == lhs.model_name) &&
           (rhs.firmware_version == lhs.firmware_version) &&
           ((std::isnan(rhs.focal_length_mm) && std::isnan(lhs.focal_length_mm)) ||
            rhs.focal_length_mm == lhs.focal_length_mm) &&
           ((std::isnan(rhs.horizontal_sensor_size_mm) &&
             std::isnan(lhs.horizontal_sensor_size_mm)) ||
            rhs.horizontal_sensor_size_mm == lhs.horizontal_sensor_size_mm) &&
           ((std::isnan(rhs.vertical_sensor_size_mm) && std::isnan(lhs.vertical_sensor_size_mm)) ||
            rhs.vertical_sensor_size_mm == lhs.vertical_sensor_size_mm) &&
           (rhs.horizontal_resolution_px == lhs.horizontal_resolution_px) &&
           (rhs.vertical_resolution_px == lhs.vertical_resolution_px) &&
           (rhs.lens_id == lhs.lens_id) &&
           (rhs.definition_file_version == lhs.definition_file_version) &&
           (rhs.definition_file_uri == lhs.definition_file_uri) &&
           (rhs.camera_cap_flags == lhs.camera_cap_flags);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Information const& information)
{
    str << std::setprecision(15);
    str << "information:" << '\n' << "{\n";
    str << "    vendor_name: " << information.vendor_name << '\n';
    str << "    model_name: " << information.model_name << '\n';
    str << "    firmware_version: " << information.firmware_version << '\n';
    str << "    focal_length_mm: " << information.focal_length_mm << '\n';
    str << "    horizontal_sensor_size_mm: " << information.horizontal_sensor_size_mm << '\n';
    str << "    vertical_sensor_size_mm: " << information.vertical_sensor_size_mm << '\n';
    str << "    horizontal_resolution_px: " << information.horizontal_resolution_px << '\n';
    str << "    vertical_resolution_px: " << information.vertical_resolution_px << '\n';
    str << "    lens_id: " << information.lens_id << '\n';
    str << "    definition_file_version: " << information.definition_file_version << '\n';
    str << "    definition_file_uri: " << information.definition_file_uri << '\n';
    str << "    camera_cap_flags: [";
    for (auto it = information.camera_cap_flags.begin(); it != information.camera_cap_flags.end();
         ++it) {
        str << *it;
        str << (it + 1 != information.camera_cap_flags.end() ? ", " : "]\n");
    }
    str << '}';
    return str;
}

bool operator==(
    const CameraServer::VideoStreamSettings& lhs, const CameraServer::VideoStreamSettings& rhs)
{
    return ((std::isnan(rhs.frame_rate_hz) && std::isnan(lhs.frame_rate_hz)) ||
            rhs.frame_rate_hz == lhs.frame_rate_hz) &&
           (rhs.horizontal_resolution_pix == lhs.horizontal_resolution_pix) &&
           (rhs.vertical_resolution_pix == lhs.vertical_resolution_pix) &&
           (rhs.bit_rate_b_s == lhs.bit_rate_b_s) && (rhs.rotation_deg == lhs.rotation_deg) &&
           (rhs.uri == lhs.uri) &&
           ((std::isnan(rhs.horizontal_fov_deg) && std::isnan(lhs.horizontal_fov_deg)) ||
            rhs.horizontal_fov_deg == lhs.horizontal_fov_deg);
}

std::ostream&
operator<<(std::ostream& str, CameraServer::VideoStreamSettings const& video_stream_settings)
{
    str << std::setprecision(15);
    str << "video_stream_settings:" << '\n' << "{\n";
    str << "    frame_rate_hz: " << video_stream_settings.frame_rate_hz << '\n';
    str << "    horizontal_resolution_pix: " << video_stream_settings.horizontal_resolution_pix
        << '\n';
    str << "    vertical_resolution_pix: " << video_stream_settings.vertical_resolution_pix << '\n';
    str << "    bit_rate_b_s: " << video_stream_settings.bit_rate_b_s << '\n';
    str << "    rotation_deg: " << video_stream_settings.rotation_deg << '\n';
    str << "    uri: " << video_stream_settings.uri << '\n';
    str << "    horizontal_fov_deg: " << video_stream_settings.horizontal_fov_deg << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(
    std::ostream& str, CameraServer::VideoStreamInfo::VideoStreamStatus const& video_stream_status)
{
    switch (video_stream_status) {
        case CameraServer::VideoStreamInfo::VideoStreamStatus::NotRunning:
            return str << "Not Running";
        case CameraServer::VideoStreamInfo::VideoStreamStatus::InProgress:
            return str << "In Progress";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(
    std::ostream& str,
    CameraServer::VideoStreamInfo::VideoStreamSpectrum const& video_stream_spectrum)
{
    switch (video_stream_spectrum) {
        case CameraServer::VideoStreamInfo::VideoStreamSpectrum::Unknown:
            return str << "Unknown";
        case CameraServer::VideoStreamInfo::VideoStreamSpectrum::VisibleLight:
            return str << "Visible Light";
        case CameraServer::VideoStreamInfo::VideoStreamSpectrum::Infrared:
            return str << "Infrared";
        default:
            return str << "Unknown";
    }
}
bool operator==(const CameraServer::VideoStreamInfo& lhs, const CameraServer::VideoStreamInfo& rhs)
{
    return (rhs.stream_id == lhs.stream_id) && (rhs.settings == lhs.settings) &&
           (rhs.status == lhs.status) && (rhs.spectrum == lhs.spectrum);
}

std::ostream& operator<<(std::ostream& str, CameraServer::VideoStreamInfo const& video_stream_info)
{
    str << std::setprecision(15);
    str << "video_stream_info:" << '\n' << "{\n";
    str << "    stream_id: " << video_stream_info.stream_id << '\n';
    str << "    settings: " << video_stream_info.settings << '\n';
    str << "    status: " << video_stream_info.status << '\n';
    str << "    spectrum: " << video_stream_info.spectrum << '\n';
    str << '}';
    return str;
}

bool operator==(const CameraServer::Position& lhs, const CameraServer::Position& rhs)
{
    return ((std::isnan(rhs.latitude_deg) && std::isnan(lhs.latitude_deg)) ||
            rhs.latitude_deg == lhs.latitude_deg) &&
           ((std::isnan(rhs.longitude_deg) && std::isnan(lhs.longitude_deg)) ||
            rhs.longitude_deg == lhs.longitude_deg) &&
           ((std::isnan(rhs.absolute_altitude_m) && std::isnan(lhs.absolute_altitude_m)) ||
            rhs.absolute_altitude_m == lhs.absolute_altitude_m) &&
           ((std::isnan(rhs.relative_altitude_m) && std::isnan(lhs.relative_altitude_m)) ||
            rhs.relative_altitude_m == lhs.relative_altitude_m);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Position const& position)
{
    str << std::setprecision(15);
    str << "position:" << '\n' << "{\n";
    str << "    latitude_deg: " << position.latitude_deg << '\n';
    str << "    longitude_deg: " << position.longitude_deg << '\n';
    str << "    absolute_altitude_m: " << position.absolute_altitude_m << '\n';
    str << "    relative_altitude_m: " << position.relative_altitude_m << '\n';
    str << '}';
    return str;
}

bool operator==(const CameraServer::Quaternion& lhs, const CameraServer::Quaternion& rhs)
{
    return ((std::isnan(rhs.w) && std::isnan(lhs.w)) || rhs.w == lhs.w) &&
           ((std::isnan(rhs.x) && std::isnan(lhs.x)) || rhs.x == lhs.x) &&
           ((std::isnan(rhs.y) && std::isnan(lhs.y)) || rhs.y == lhs.y) &&
           ((std::isnan(rhs.z) && std::isnan(lhs.z)) || rhs.z == lhs.z);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Quaternion const& quaternion)
{
    str << std::setprecision(15);
    str << "quaternion:" << '\n' << "{\n";
    str << "    w: " << quaternion.w << '\n';
    str << "    x: " << quaternion.x << '\n';
    str << "    y: " << quaternion.y << '\n';
    str << "    z: " << quaternion.z << '\n';
    str << '}';
    return str;
}

bool operator==(const CameraServer::CaptureInfo& lhs, const CameraServer::CaptureInfo& rhs)
{
    return (rhs.position == lhs.position) && (rhs.attitude_quaternion == lhs.attitude_quaternion) &&
           (rhs.time_utc_us == lhs.time_utc_us) && (rhs.is_success == lhs.is_success) &&
           (rhs.index == lhs.index) && (rhs.file_url == lhs.file_url);
}

std::ostream& operator<<(std::ostream& str, CameraServer::CaptureInfo const& capture_info)
{
    str << std::setprecision(15);
    str << "capture_info:" << '\n' << "{\n";
    str << "    position: " << capture_info.position << '\n';
    str << "    attitude_quaternion: " << capture_info.attitude_quaternion << '\n';
    str << "    time_utc_us: " << capture_info.time_utc_us << '\n';
    str << "    is_success: " << capture_info.is_success << '\n';
    str << "    index: " << capture_info.index << '\n';
    str << "    file_url: " << capture_info.file_url << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(std::ostream& str, CameraServer::Result const& result)
{
    switch (result) {
        case CameraServer::Result::Unknown:
            return str << "Unknown";
        case CameraServer::Result::Success:
            return str << "Success";
        case CameraServer::Result::InProgress:
            return str << "In Progress";
        case CameraServer::Result::Busy:
            return str << "Busy";
        case CameraServer::Result::Denied:
            return str << "Denied";
        case CameraServer::Result::Error:
            return str << "Error";
        case CameraServer::Result::Timeout:
            return str << "Timeout";
        case CameraServer::Result::WrongArgument:
            return str << "Wrong Argument";
        case CameraServer::Result::NoSystem:
            return str << "No System";
        default:
            return str << "Unknown";
    }
}

std::ostream&
operator<<(std::ostream& str, CameraServer::StorageInformation::StorageStatus const& storage_status)
{
    switch (storage_status) {
        case CameraServer::StorageInformation::StorageStatus::NotAvailable:
            return str << "Not Available";
        case CameraServer::StorageInformation::StorageStatus::Unformatted:
            return str << "Unformatted";
        case CameraServer::StorageInformation::StorageStatus::Formatted:
            return str << "Formatted";
        case CameraServer::StorageInformation::StorageStatus::NotSupported:
            return str << "Not Supported";
        default:
            return str << "Unknown";
    }
}

std::ostream&
operator<<(std::ostream& str, CameraServer::StorageInformation::StorageType const& storage_type)
{
    switch (storage_type) {
        case CameraServer::StorageInformation::StorageType::Unknown:
            return str << "Unknown";
        case CameraServer::StorageInformation::StorageType::UsbStick:
            return str << "Usb Stick";
        case CameraServer::StorageInformation::StorageType::Sd:
            return str << "Sd";
        case CameraServer::StorageInformation::StorageType::Microsd:
            return str << "Microsd";
        case CameraServer::StorageInformation::StorageType::Hd:
            return str << "Hd";
        case CameraServer::StorageInformation::StorageType::Other:
            return str << "Other";
        default:
            return str << "Unknown";
    }
}
bool operator==(
    const CameraServer::StorageInformation& lhs, const CameraServer::StorageInformation& rhs)
{
    return ((std::isnan(rhs.used_storage_mib) && std::isnan(lhs.used_storage_mib)) ||
            rhs.used_storage_mib == lhs.used_storage_mib) &&
           ((std::isnan(rhs.available_storage_mib) && std::isnan(lhs.available_storage_mib)) ||
            rhs.available_storage_mib == lhs.available_storage_mib) &&
           ((std::isnan(rhs.total_storage_mib) && std::isnan(lhs.total_storage_mib)) ||
            rhs.total_storage_mib == lhs.total_storage_mib) &&
           (rhs.storage_status == lhs.storage_status) && (rhs.storage_id == lhs.storage_id) &&
           (rhs.storage_type == lhs.storage_type) &&
           ((std::isnan(rhs.read_speed_mib_s) && std::isnan(lhs.read_speed_mib_s)) ||
            rhs.read_speed_mib_s == lhs.read_speed_mib_s) &&
           ((std::isnan(rhs.write_speed_mib_s) && std::isnan(lhs.write_speed_mib_s)) ||
            rhs.write_speed_mib_s == lhs.write_speed_mib_s);
}

std::ostream&
operator<<(std::ostream& str, CameraServer::StorageInformation const& storage_information)
{
    str << std::setprecision(15);
    str << "storage_information:" << '\n' << "{\n";
    str << "    used_storage_mib: " << storage_information.used_storage_mib << '\n';
    str << "    available_storage_mib: " << storage_information.available_storage_mib << '\n';
    str << "    total_storage_mib: " << storage_information.total_storage_mib << '\n';
    str << "    storage_status: " << storage_information.storage_status << '\n';
    str << "    storage_id: " << storage_information.storage_id << '\n';
    str << "    storage_type: " << storage_information.storage_type << '\n';
    str << "    read_speed_mib_s: " << storage_information.read_speed_mib_s << '\n';
    str << "    write_speed_mib_s: " << storage_information.write_speed_mib_s << '\n';
    str << '}';
    return str;
}

std::ostream&
operator<<(std::ostream& str, CameraServer::CaptureStatus::ImageStatus const& image_status)
{
    switch (image_status) {
        case CameraServer::CaptureStatus::ImageStatus::Idle:
            return str << "Idle";
        case CameraServer::CaptureStatus::ImageStatus::CaptureInProgress:
            return str << "Capture In Progress";
        case CameraServer::CaptureStatus::ImageStatus::IntervalIdle:
            return str << "Interval Idle";
        case CameraServer::CaptureStatus::ImageStatus::IntervalInProgress:
            return str << "Interval In Progress";
        default:
            return str << "Unknown";
    }
}

std::ostream&
operator<<(std::ostream& str, CameraServer::CaptureStatus::VideoStatus const& video_status)
{
    switch (video_status) {
        case CameraServer::CaptureStatus::VideoStatus::Idle:
            return str << "Idle";
        case CameraServer::CaptureStatus::VideoStatus::CaptureInProgress:
            return str << "Capture In Progress";
        default:
            return str << "Unknown";
    }
}
bool operator==(const CameraServer::CaptureStatus& lhs, const CameraServer::CaptureStatus& rhs)
{
    return ((std::isnan(rhs.image_interval_s) && std::isnan(lhs.image_interval_s)) ||
            rhs.image_interval_s == lhs.image_interval_s) &&
           ((std::isnan(rhs.recording_time_s) && std::isnan(lhs.recording_time_s)) ||
            rhs.recording_time_s == lhs.recording_time_s) &&
           ((std::isnan(rhs.available_capacity_mib) && std::isnan(lhs.available_capacity_mib)) ||
            rhs.available_capacity_mib == lhs.available_capacity_mib) &&
           (rhs.image_status == lhs.image_status) && (rhs.video_status == lhs.video_status) &&
           (rhs.image_count == lhs.image_count);
}

std::ostream& operator<<(std::ostream& str, CameraServer::CaptureStatus const& capture_status)
{
    str << std::setprecision(15);
    str << "capture_status:" << '\n' << "{\n";
    str << "    image_interval_s: " << capture_status.image_interval_s << '\n';
    str << "    recording_time_s: " << capture_status.recording_time_s << '\n';
    str << "    available_capacity_mib: " << capture_status.available_capacity_mib << '\n';
    str << "    image_status: " << capture_status.image_status << '\n';
    str << "    video_status: " << capture_status.video_status << '\n';
    str << "    image_count: " << capture_status.image_count << '\n';
    str << '}';
    return str;
}

bool operator==(const CameraServer::Settings& lhs, const CameraServer::Settings& rhs)
{
    return (rhs.mode == lhs.mode) &&
           ((std::isnan(rhs.zoom_level) && std::isnan(lhs.zoom_level)) ||
            rhs.zoom_level == lhs.zoom_level) &&
           ((std::isnan(rhs.focus_level) && std::isnan(lhs.focus_level)) ||
            rhs.focus_level == lhs.focus_level);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Settings const& settings)
{
    str << std::setprecision(15);
    str << "settings:" << '\n' << "{\n";
    str << "    mode: " << settings.mode << '\n';
    str << "    zoom_level: " << settings.zoom_level << '\n';
    str << "    focus_level: " << settings.focus_level << '\n';
    str << '}';
    return str;
}

std::ostream& operator<<(std::ostream& str, CameraServer::CameraFeedback const& camera_feedback)
{
    switch (camera_feedback) {
        case CameraServer::CameraFeedback::Unknown:
            return str << "Unknown";
        case CameraServer::CameraFeedback::Ok:
            return str << "Ok";
        case CameraServer::CameraFeedback::Busy:
            return str << "Busy";
        case CameraServer::CameraFeedback::Failed:
            return str << "Failed";
        default:
            return str << "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, CameraServer::Mode const& mode)
{
    switch (mode) {
        case CameraServer::Mode::Unknown:
            return str << "Unknown";
        case CameraServer::Mode::Photo:
            return str << "Photo";
        case CameraServer::Mode::Video:
            return str << "Video";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk