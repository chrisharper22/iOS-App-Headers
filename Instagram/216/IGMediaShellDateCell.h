//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGMediaDateAnnotation, NSDate;

@interface IGMediaShellDateCell : UICollectionViewCell
{
    IGMediaDateAnnotation *_dateOverlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
