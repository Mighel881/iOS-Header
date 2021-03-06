//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFAddBookmarkActivity.h>

#import "_SFSingleBookmarkNavigationControllerDelegate-Protocol.h"

@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddBookmarkUIActivity : _SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate>
{
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

- (void).cxx_destruct;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2 bookmark:(id)arg3;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (id)init;
- (id)initWithTabDocument:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <AddBookmarkActivityDelegate> delegate; // @dynamic delegate;

@end

