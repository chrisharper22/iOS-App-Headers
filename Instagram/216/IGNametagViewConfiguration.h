//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface IGNametagViewConfiguration : NSObject
{
    double _cardSizeFactor;
    double _cornerRadius;
    double _fontSizeFactor;
    double _cornerSizeFactor;
    double _cornerLineWidthFactor;
    double _glyphSizeFactor;
    double _labelPaddingFactor;
    double _labelLineSpaceFactor;
    double _labelSizeFactor;
    UIColor *_shadowColor;
    double _shadowOpacity;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
    double _qrCodeInsetRatio;
    struct CGSize _shadowOffset;
}

+ (id)qrCodeDialogConfig;
+ (id)highResConfig;
+ (id)storyCameraConfig;
+ (id)scanConfig;
+ (id)sideTrayConfig;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(readonly, nonatomic) double qrCodeInsetRatio; // @synthesize qrCodeInsetRatio=_qrCodeInsetRatio;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double labelSizeFactor; // @synthesize labelSizeFactor=_labelSizeFactor;
@property(readonly, nonatomic) double labelLineSpaceFactor; // @synthesize labelLineSpaceFactor=_labelLineSpaceFactor;
@property(readonly, nonatomic) double labelPaddingFactor; // @synthesize labelPaddingFactor=_labelPaddingFactor;
@property(readonly, nonatomic) double glyphSizeFactor; // @synthesize glyphSizeFactor=_glyphSizeFactor;
@property(readonly, nonatomic) double cornerLineWidthFactor; // @synthesize cornerLineWidthFactor=_cornerLineWidthFactor;
@property(readonly, nonatomic) double cornerSizeFactor; // @synthesize cornerSizeFactor=_cornerSizeFactor;
@property(readonly, nonatomic) double fontSizeFactor; // @synthesize fontSizeFactor=_fontSizeFactor;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double cardSizeFactor; // @synthesize cardSizeFactor=_cardSizeFactor;
- (id)_initWithCardSizeFactor:(double)arg1 cornerRadius:(double)arg2 fontSizeFactor:(double)arg3 cornerSizeFactor:(double)arg4 cornerLineWidthFactor:(double)arg5 glyphSizeFactor:(double)arg6 labelpaddingFactor:(double)arg7 labelLineSpaceFactor:(double)arg8 labelSizeFactor:(double)arg9 shadowColor:(id)arg10 shadowOffset:(struct CGSize)arg11 shadowOpacity:(double)arg12 backgroundColor:(id)arg13 borderColor:(id)arg14 borderWitdh:(double)arg15 qrCodeInsetRatio:(double)arg16;

@end

