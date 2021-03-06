//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

__attribute__((visibility("hidden")))
@interface TSTAutofillSelection : TSKSelection
{
    struct TSUCellRect _sourceCellRange;
    struct TSUCellRect _targetCellRange;
}

+ (Class)archivedSelectionClass;
+ (id)autofillSelectionWithSourceCellRange:(struct TSUCellRect)arg1 targetCellRange:(struct TSUCellRect)arg2;
+ (id)autofillSelectionWithSourceCellRange:(struct TSUCellRect)arg1;
@property(nonatomic) struct TSUCellRect targetCellRange; // @synthesize targetCellRange=_targetCellRange;
@property(nonatomic) struct TSUCellRect sourceCellRange; // @synthesize sourceCellRange=_sourceCellRange;
- (_Bool)isValidForRowVisibilityChangeInRegion:(id)arg1 table:(id)arg2;
- (_Bool)isValidForCellSelection:(id)arg1 inTable:(id)arg2;
- (id)initWithSourceCellRange:(struct TSUCellRect)arg1 targetCellRange:(struct TSUCellRect)arg2;
- (id)initWithSourceCellRange:(struct TSUCellRect)arg1;

@end

