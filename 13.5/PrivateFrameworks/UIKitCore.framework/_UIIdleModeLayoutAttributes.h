//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _UIIdleModeLayoutAttributes : NSObject
{
    _Bool _wantsDimmingOverlay;
    double _alphaOffset;
    struct CGPoint _centerOffset;
    struct CGAffineTransform _transform;
}

@property(nonatomic) _Bool wantsDimmingOverlay; // @synthesize wantsDimmingOverlay=_wantsDimmingOverlay;
@property(nonatomic) double alphaOffset; // @synthesize alphaOffset=_alphaOffset;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
- (id)init;

@end

