//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface RMModelStatusManagementDeclarations_Declaration : RMModelPayloadBase
{
    NSString *_statusIdentifier;
    NSString *_statusServerToken;
    NSNumber *_statusActive;
    NSString *_statusValid;
    NSArray *_statusReasons;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2 active:(id)arg3 valid:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2 active:(id)arg3 valid:(id)arg4 reasons:(id)arg5;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *statusReasons; // @synthesize statusReasons=_statusReasons;
@property(copy, nonatomic) NSString *statusValid; // @synthesize statusValid=_statusValid;
@property(copy, nonatomic) NSNumber *statusActive; // @synthesize statusActive=_statusActive;
@property(copy, nonatomic) NSString *statusServerToken; // @synthesize statusServerToken=_statusServerToken;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

