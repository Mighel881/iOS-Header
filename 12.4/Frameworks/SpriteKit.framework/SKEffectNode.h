//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import <SpriteKit/SKWarpable-Protocol.h>

@class CIFilter, NSDictionary, NSString, SKShader, SKWarpGeometry;

@interface SKEffectNode : SKNode <SKWarpable>
{
    struct SKCEffectNode *_skcEffectNode;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (_Bool)supportsSecureCoding;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
@property(retain, nonatomic) SKShader *shader;
@property(nonatomic) _Bool shouldCenterFilter;
- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
@property(nonatomic) long long blendMode;
@property(nonatomic) _Bool shouldRasterize;
@property(nonatomic) _Bool shouldEnableEffects;
@property(retain, nonatomic) CIFilter *filter;
@property(nonatomic) long long subdivisionLevels;
@property(retain, nonatomic) SKWarpGeometry *warpGeometry;
- (_Bool)isEqualToNode:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

