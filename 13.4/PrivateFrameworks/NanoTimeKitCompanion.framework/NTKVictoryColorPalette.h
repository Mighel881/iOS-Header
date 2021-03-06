//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKVictoryAnalogBackgroundColorPalette-Protocol.h>

@class CLKDevice, NSString, UIColor;

@interface NTKVictoryColorPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette>
{
    _Bool _hasWhiteElements;
    unsigned long long _color;
    UIColor *_numbersColor;
    UIColor *_handsColor;
    UIColor *_logoColor;
    UIColor *_secondHandColor;
    UIColor *_handInlayColor;
    UIColor *_analogComplicationsColor;
    UIColor *_analogDotColor;
    UIColor *_digitalComplicationsColor;
    UIColor *_digitalComplicationsPlatterColor;
    UIColor *_platterColor;
    UIColor *_cornerComplicationsAccentColor;
    unsigned long long _bleed;
    UIColor *_backgroundColor;
    CLKDevice *_device;
}

+ (id)paletteForDevice:(id)arg1 color:(unsigned long long)arg2 bleed:(unsigned long long)arg3;
+ (id)paletteForDevice:(id)arg1 color:(unsigned long long)arg2 style:(unsigned long long)arg3;
+ (id)voltColor;
- (void).cxx_destruct;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) unsigned long long bleed; // @synthesize bleed=_bleed;
@property(readonly, nonatomic) _Bool hasWhiteElements; // @synthesize hasWhiteElements=_hasWhiteElements;
@property(readonly, nonatomic) UIColor *cornerComplicationsAccentColor; // @synthesize cornerComplicationsAccentColor=_cornerComplicationsAccentColor;
@property(readonly, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property(readonly, nonatomic) UIColor *digitalComplicationsPlatterColor; // @synthesize digitalComplicationsPlatterColor=_digitalComplicationsPlatterColor;
@property(readonly, nonatomic) UIColor *digitalComplicationsColor; // @synthesize digitalComplicationsColor=_digitalComplicationsColor;
@property(readonly, nonatomic) UIColor *analogDotColor; // @synthesize analogDotColor=_analogDotColor;
@property(readonly, nonatomic) UIColor *analogComplicationsColor; // @synthesize analogComplicationsColor=_analogComplicationsColor;
@property(readonly, nonatomic) UIColor *handInlayColor; // @synthesize handInlayColor=_handInlayColor;
@property(readonly, nonatomic) UIColor *secondHandColor; // @synthesize secondHandColor=_secondHandColor;
@property(readonly, nonatomic) UIColor *logoColor; // @synthesize logoColor=_logoColor;
@property(readonly, nonatomic) UIColor *handsColor; // @synthesize handsColor=_handsColor;
@property(readonly, nonatomic) UIColor *numbersColor; // @synthesize numbersColor=_numbersColor;
@property(readonly, nonatomic) unsigned long long color; // @synthesize color=_color;
- (id)colorForLogoWithStyle:(unsigned long long)arg1;
- (id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1;
- (id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 color:(unsigned long long)arg2 bleed:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

