//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding>
{
    _Bool _locked;
    NSString *_identifier;
    unsigned long long _lifecycleState;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) unsigned long long lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 locked:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2;

@end

