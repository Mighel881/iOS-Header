//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CARSettingsCellSpecifier, UIView;
@protocol CARSettingsPanelControllable;

@interface CARSettingsPanel : UIViewController
{
    CARSettingsCellSpecifier *_cellSpecifier;
    id <CARSettingsPanelControllable> _panelController;
    UIView *_phoneView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *phoneView; // @synthesize phoneView=_phoneView;
@property(readonly, nonatomic) id <CARSettingsPanelControllable> panelController; // @synthesize panelController=_panelController;
@property(readonly, nonatomic) CARSettingsCellSpecifier *cellSpecifier; // @synthesize cellSpecifier=_cellSpecifier;
- (id)navigationItem;
- (void)viewDidLoad;
- (id)title;
- (id)initWithPanelController:(id)arg1;

@end

