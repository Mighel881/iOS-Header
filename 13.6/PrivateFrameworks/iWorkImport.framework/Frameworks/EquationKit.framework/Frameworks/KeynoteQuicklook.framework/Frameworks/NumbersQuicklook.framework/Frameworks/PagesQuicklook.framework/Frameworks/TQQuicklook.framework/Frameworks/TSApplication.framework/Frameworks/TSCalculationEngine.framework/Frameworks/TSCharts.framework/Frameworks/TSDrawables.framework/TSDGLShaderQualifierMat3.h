//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier
{
    struct CGAffineTransform _affineTransform;
    struct CGAffineTransform _proposedAffineTransform;
}

@property(nonatomic) struct CGAffineTransform proposedAffineTransform; // @synthesize proposedAffineTransform=_proposedAffineTransform;
@property(readonly, nonatomic) struct CGAffineTransform affineTransform; // @synthesize affineTransform=_affineTransform;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

