//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocationValue;

@protocol _INPBSpatialEventTrigger <NSObject>
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) _INPBLocationValue *location;
@property(nonatomic) _Bool hasEvent;
@property(nonatomic) int event;
- (int)StringAsEvent:(NSString *)arg1;
- (NSString *)eventAsString:(int)arg1;
@end

