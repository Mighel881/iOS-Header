//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TransparencyDetailsView/NSObject-Protocol.h>

@protocol SBSHardwareButtonEventConsuming <NSObject>

@optional
- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (void)consumeLongPressForButtonKind:(long long)arg1;
- (void)consumeTriplePressUpForButtonKind:(long long)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
@end

