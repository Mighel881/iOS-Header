//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface LSEnumerator : NSEnumerator
{
    struct atomic_flag _hasFiredErrorHandler;
    CDUnknownBlockType _errorHandler;
}

+ (id)enumeratorForAllExtensionPoints;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorForPlugInKitProxiesWithOptions:(unsigned long long)arg1;
+ (id)enumeratorForApplicationProxiesOnVolume:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1;
+ (id)new;
+ (id)_log;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void).cxx_destruct;
- (id)nextObject;
- (id)init;
- (void)_fireErrorHandlerWithError:(id)arg1;
- (id)_init;

@end

