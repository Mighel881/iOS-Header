//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell
{
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
- (id)_setStatusLabelText;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end

