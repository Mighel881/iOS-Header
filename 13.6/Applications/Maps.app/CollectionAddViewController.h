//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AddFromACViewController.h"

@class CollectionSaveSession;

__attribute__((visibility("hidden")))
@interface CollectionAddViewController : AddFromACViewController
{
    CollectionSaveSession *_editSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CollectionSaveSession *editSession; // @synthesize editSession=_editSession;
- (void)saveMapItem:(id)arg1;
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;
- (int)requestSource;
- (id)headerTitle;

@end

