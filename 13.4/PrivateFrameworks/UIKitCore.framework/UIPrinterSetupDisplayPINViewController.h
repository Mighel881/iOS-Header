//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupDisplayPINViewController : UIViewController
{
    PKPrinter *_printer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void)enterPIN;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showDisplayMessage:(long long)arg1;
- (void)loadView;
- (id)initWithPrinter:(id)arg1;

@end

