//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemCTACellState, IGFeedItemPageCellState, IGMedia, IGPostItem, IGUserSession, NSAttributedString, NSNumber, NSString, UIColor;
@protocol IGFeedConfigurationType, IGFeedItemCTAButtonCellConfigurableDelegate, IGFeedItemLoggingProviderDelegate;

@protocol IGFeedItemCTAButtonCellConfigurable <NSObject>
+ (double)height;
@property(nonatomic) _Bool showSpinner;
@property(readonly, nonatomic) NSString *destinationText;
@property(readonly, nonatomic) NSString *title;
@property(retain, nonatomic) NSNumber *lightModePreHighlightColorScheme;
@property(retain, nonatomic) NSNumber *darkModePreHighlightColorScheme;
@property(nonatomic) _Bool isShownInDarkTheme;
@property(retain, nonatomic) UIColor *customizableBackgroundColor;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate;
@property(nonatomic) __weak id <IGFeedItemCTAButtonCellConfigurableDelegate> delegate;
@property(nonatomic) unsigned long long accessoryViewType;
@property(retain, nonatomic) IGMedia *media;
- (void)configureWithTitleColor:(UIColor *)arg1 rightAccessoryButtonColor:(UIColor *)arg2;
- (void)updateForVisibleDisplayRect:(struct CGRect)arg1;
- (void)progressCustomizableButtonCTAStateWithIntent:(NSString *)arg1;
- (void)progressivelyUpdateButtonStyleFromPostItem:(IGPostItem *)arg1 toPostItem:(IGPostItem *)arg2 progressPercentage:(double)arg3;
- (void)updateDestinationAdText:(NSString *)arg1 accessoryColor:(UIColor *)arg2;
- (void)updateButtonWithPostItem:(IGPostItem *)arg1 media:(IGMedia *)arg2;
- (void)updateCustomizableButtonToCTAState:(unsigned long long)arg1 withIntent:(NSString *)arg2 animated:(_Bool)arg3;
- (void)setCustomizableButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCustomizableButtonAttributedTitle:(NSAttributedString *)arg1;
- (void)setCustomizableButtonPrimaryTitle:(NSString *)arg1;
- (void)configureWithNumOfLines:(long long)arg1;
- (void)configureWithAttributedTitle:(NSAttributedString *)arg1 backgroundColor:(UIColor *)arg2 cellDelegate:(id <IGFeedItemCTAButtonCellConfigurableDelegate>)arg3;
- (void)configureWithTitle:(NSString *)arg1 backgroundColor:(UIColor *)arg2 cellDelegate:(id <IGFeedItemCTAButtonCellConfigurableDelegate>)arg3;
- (void)configureWithMedia:(IGMedia *)arg1 feedConfiguration:(id <IGFeedConfigurationType>)arg2 cellDelegate:(id <IGFeedItemCTAButtonCellConfigurableDelegate>)arg3 loggingDelegate:(id <IGFeedItemLoggingProviderDelegate>)arg4 actionCellState:(IGFeedItemCTACellState *)arg5 pageCellState:(IGFeedItemPageCellState *)arg6 enableLeftAccessory:(_Bool)arg7 rightAccessoryPosition:(unsigned long long)arg8 tappableAreaInsets:(struct UIEdgeInsets)arg9 enableAutomatedLogging:(_Bool)arg10 session:(IGUserSession *)arg11;
@end

