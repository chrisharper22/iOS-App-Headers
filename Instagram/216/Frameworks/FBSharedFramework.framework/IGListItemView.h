//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/FDSImpressionTrackingMetadataProvider-Protocol.h>
#import <FBSharedFramework/IGListItemViewProviderDelegate-Protocol.h>

@class NSString;
@protocol IGListItemViewProvider;

@interface IGListItemView : UIView <IGListItemViewProviderDelegate, FDSImpressionTrackingMetadataProvider>
{
    UIView *_leadingContent;
    UIView *_bodyContent;
    UIView *_trailingContent;
    UIView *_bottomBorder;
    _Bool _showBottomBorder;
    _Bool _selected;
    _Bool _highlighted;
    id <IGListItemViewProvider> _provider;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool showBottomBorder; // @synthesize showBottomBorder=_showBottomBorder;
@property(readonly, nonatomic) id <IGListItemViewProvider> provider; // @synthesize provider=_provider;
- (id)ui_tracker_metadata;
- (void)viewProviderDidFinishUpdatingOutViews:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (double)heightFittingWidth:(double)arg1;
- (double)_separatorHeight;
- (void)_setTrailingContentTopAligned:(double)arg1;
- (void)layoutSubviews;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

