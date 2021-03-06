//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CoreSpotlightPreferences : NSObject
{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    CDUnknownBlockType _notifyHandler;
    CDUnknownBlockType _notify_handler;
    NSString *_state_key;
    const char *_notification_key;
}

@property(nonatomic) const char *notification_key; // @synthesize notification_key=_notification_key;
@property(retain, nonatomic) NSString *state_key; // @synthesize state_key=_state_key;
@property(readonly, copy, nonatomic) CDUnknownBlockType notify_handler; // @synthesize notify_handler=_notify_handler;
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(copy, nonatomic) CDUnknownBlockType notifyHandler; // @synthesize notifyHandler=_notifyHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
- (void).cxx_destruct;
- (void)saveState:(id)arg1;
- (void)handlePreferencesChanged;
- (void)dealloc;
- (_Bool)notifyStart;

@end

