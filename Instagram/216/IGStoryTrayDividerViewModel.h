//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSUUID, UIColor;

@interface IGStoryTrayDividerViewModel : NSObject <IGListDiffable>
{
    NSUUID *_diffIdentifier;
    double _cellWidth;
    double _topInset;
    double _bottomInset;
    UIColor *_dividerColor;
}

+ (id)topTrayDividerSmallViewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithCellWidth:(double)arg1 topInset:(double)arg2 bottomInset:(double)arg3 color:(id)arg4;

@end

