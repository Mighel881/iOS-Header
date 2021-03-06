//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMLightingCube, CAMLightingCubeAppearance;

@interface CAMLightingCubeRenderer : NSObject
{
    CAMLightingCube *_cube;
    CAMLightingCubeAppearance *_appearance;
    long long _components;
}

- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5;
- (id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3;

@end

