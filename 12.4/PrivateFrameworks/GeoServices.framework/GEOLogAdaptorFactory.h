//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOLogAdaptorFactory : NSObject
{
    NSMutableDictionary *_logAdaptors;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_createLogAdaptorWithPolicy:(id)arg1;
- (id)logAdaptorWithPolicy:(id)arg1;
- (void)dealloc;
- (id)init;

@end

