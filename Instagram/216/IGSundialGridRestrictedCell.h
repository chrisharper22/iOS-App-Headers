//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCoreTextView;
@protocol IGCoreTextLinkHandler;

@interface IGSundialGridRestrictedCell : UICollectionViewCell
{
    IGCoreTextView *_description;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)confgiureWithMessage:(id)arg1 linkText:(id)arg2 linkURL:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

