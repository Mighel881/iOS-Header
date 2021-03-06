//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class NSArray, NSString, STUsageDetailsViewModel;

@protocol STUsageDetailsViewModelCoordinator <NSObject>
@property(readonly, getter=isRefreshing) _Bool refreshing;
@property(copy, nonatomic) NSString *selectedDeviceIdentifier;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, nonatomic) STUsageDetailsViewModel *viewModel;
- (void)refreshUsageData;
- (void)stopRefreshingUsageData;
- (void)startRefreshingUsageData;
@end

