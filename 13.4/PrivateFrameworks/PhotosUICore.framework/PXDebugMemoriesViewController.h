//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PHMemory, UISegmentedControl, UITableView;

@interface PXDebugMemoriesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>
{
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHMemory *_sourceMemory;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_closeAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)viewDidLoad;
- (void)_setupWithDictionary:(id)arg1;
- (id)initWithMemory:(id)arg1 memoryInfo:(id)arg2;
- (id)_debugDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

