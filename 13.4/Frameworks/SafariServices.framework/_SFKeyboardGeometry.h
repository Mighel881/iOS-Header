//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SFKeyboardGeometry : NSObject
{
    struct CGSize _sizeWithoutBar;
    struct CGSize _sizeWithBar;
}

+ (id)keyboardGeometryForInterfaceOrientation:(long long)arg1;
+ (id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGSize sizeWithBar; // @synthesize sizeWithBar=_sizeWithBar;
@property(readonly, nonatomic) struct CGSize sizeWithoutBar; // @synthesize sizeWithoutBar=_sizeWithoutBar;
- (id)_initWithFallbackSizeForOrientation:(long long)arg1;
- (id)_initWithSizeWithoutBar:(struct CGSize)arg1 sizeWithBar:(struct CGSize)arg2;

@end

