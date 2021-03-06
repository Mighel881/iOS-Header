//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, NSXPCConnection, _LSOpenConfiguration;

__attribute__((visibility("hidden")))
@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_URL;
    NSString *_bundleIdentifier;
    _LSOpenConfiguration *_openConfiguration;
    NSXPCConnection *_XPCConnection;
    NSDictionary *_browserState;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSDictionary *browserState; // @synthesize browserState=_browserState;
@property(retain) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property(retain) _LSOpenConfiguration *openConfiguration; // @synthesize openConfiguration=_openConfiguration;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
@property(readonly) const CDStruct_4c969caf *auditToken;

@end

