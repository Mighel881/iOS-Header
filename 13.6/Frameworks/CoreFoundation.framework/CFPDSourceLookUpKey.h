//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDSourceLookUpKey : NSObject
{
    struct __CFString *domain;
    struct __CFString *userName;
    struct __CFString *containerPath;
    struct __CFString *cloudPath;
    _Bool byHost;
    _Bool managed;
    _Bool managedUsesContainer;
    _Bool cloud;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

