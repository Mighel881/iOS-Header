//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VKMuninRoad : NSObject
{
    NSString *_roadName;
}

@property(readonly, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLocalizedName:(const char *)arg1;
- (id)initWithMuninRoadEdge:(const struct MuninRoadEdge *)arg1 localize:(_Bool)arg2;

@end

