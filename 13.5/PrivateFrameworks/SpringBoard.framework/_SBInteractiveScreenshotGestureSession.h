//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, SBInteractiveScreenshotGestureHostRootViewController, SBInteractiveScreenshotGestureHostWindow, SBInteractiveScreenshotGestureRootViewController, SBInteractiveScreenshotGestureRootWindow;

@interface _SBInteractiveScreenshotGestureSession : NSObject
{
    NSUUID *_sessionID;
    SBInteractiveScreenshotGestureRootWindow *_rootWindow;
    SBInteractiveScreenshotGestureHostWindow *_hostWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBInteractiveScreenshotGestureHostWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) SBInteractiveScreenshotGestureRootWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property(readonly, nonatomic) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
- (id)initWithSessionID:(id)arg1;

@end

