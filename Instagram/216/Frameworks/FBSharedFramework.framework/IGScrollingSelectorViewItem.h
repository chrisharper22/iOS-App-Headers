//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGImageSpecifier, NSString, UIColor;

@interface IGScrollingSelectorViewItem : NSObject
{
    _Bool _usesBlurredBackground;
    unsigned long long _style;
    unsigned long long _selectionRingColor;
    long long _imageContentMode;
    IGImageSpecifier *_imageSpecifier;
    UIColor *_selectedTintColor;
    NSString *_text;
    NSString *_customIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(nonatomic) unsigned long long selectionRingColor; // @synthesize selectionRingColor=_selectionRingColor;
@property(nonatomic) _Bool usesBlurredBackground; // @synthesize usesBlurredBackground=_usesBlurredBackground;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)init;

@end

