//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoVolumeObserving <NSObject>
@property(copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;
@property(copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) _Bool muted;
@end

