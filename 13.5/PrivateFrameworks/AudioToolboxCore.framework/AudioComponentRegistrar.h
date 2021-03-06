//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSXPCListenerDelegate-Protocol.h>

@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate>
{
    struct AudioComponentRegistrarImpl *_impl;
}

@property(readonly, nonatomic) struct AudioComponentRegistrarImpl *impl; // @synthesize impl=_impl;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resumeListeners;
- (void)dealloc;
- (id)initForMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

