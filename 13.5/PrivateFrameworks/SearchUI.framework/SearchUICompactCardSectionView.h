//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUILabel, TLKStackView;

@interface SearchUICompactCardSectionView : SearchUICardSectionView
{
    TLKStackView *_stackView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_subtitleLabel;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SearchUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
- (void)updateWithRowModel:(id)arg1;
- (id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2;
- (id)setupContentView;

@end

