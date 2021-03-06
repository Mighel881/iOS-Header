//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSIndexPath;
@protocol MTUISelectionTableViewControllerDelegate;

@interface MTUISelectionTableViewController : UITableViewController
{
    _Bool _allowsNone;
    NSArray *_selectionData;
    id <MTUISelectionTableViewControllerDelegate> _delegate;
    NSIndexPath *_parentIndexPath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsNone; // @synthesize allowsNone=_allowsNone;
@property(retain, nonatomic) NSIndexPath *parentIndexPath; // @synthesize parentIndexPath=_parentIndexPath;
@property(nonatomic) __weak id <MTUISelectionTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *selectionData; // @synthesize selectionData=_selectionData;
- (void)deselectRowsExcluding:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 selectionData:(id)arg3 parentIndexPath:(id)arg4 allowsMultiple:(_Bool)arg5 allowsNone:(_Bool)arg6 delegate:(id)arg7;
- (_Bool)_canShowWhileLocked;

@end

