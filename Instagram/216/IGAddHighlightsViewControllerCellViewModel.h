//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryReel;

@interface IGAddHighlightsViewControllerCellViewModel : NSObject
{
    _Bool _isPlaceholder;
    _Bool _isSelectable;
    _Bool _isSelected;
    IGStoryReel *_reel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) IGStoryReel *reel; // @synthesize reel=_reel;
- (id)initWithReel:(id)arg1 isPlaceholder:(_Bool)arg2 isSelectable:(_Bool)arg3 isSelected:(_Bool)arg4;

@end

