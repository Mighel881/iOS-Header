//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMAutoLowLightVideoCommand : CAMCaptureCommand
{
    _Bool _autoLowLightVideoEnabled;
}

@property(readonly, nonatomic, getter=isAutoLowLightVideoEnabled) _Bool autoLowLightVideoEnabled; // @synthesize autoLowLightVideoEnabled=_autoLowLightVideoEnabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAutoLowLightVideoEnabled:(_Bool)arg1;

@end

