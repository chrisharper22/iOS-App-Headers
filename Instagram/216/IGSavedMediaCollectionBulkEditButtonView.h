//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTextButton;
@protocol IGSavedMediaCollectionBulkEditButtonViewDelegate;

@interface IGSavedMediaCollectionBulkEditButtonView : UIView
{
    IGTextButton *_removeButton;
    _Bool _enableUserInteraction;
    id <IGSavedMediaCollectionBulkEditButtonViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSavedMediaCollectionBulkEditButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableUserInteraction; // @synthesize enableUserInteraction=_enableUserInteraction;
- (void)_removeButtonTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithButtonType:(unsigned long long)arg1;

@end

