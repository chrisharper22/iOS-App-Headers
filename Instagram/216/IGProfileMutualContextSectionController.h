//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGProfileMutualContextCell, IGProfileMutualContextModel, IGStyledString, IGUserSession, NSString;
@protocol IGProfileMutualContextSectionControllerDelegate;

@interface IGProfileMutualContextSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    IGProfileMutualContextCell *_mutualContextCell;
    IGProfileMutualContextModel *_model;
    IGStyledString *_contextStyledString;
    double _horizontalPadding;
    struct UIEdgeInsets _inset;
    double _facepileWidth;
    double _facepileOverlap;
    double _facepileSpacing;
    double _facepileBorder;
    NSString *_analyticsModule;
    id <IGProfileMutualContextSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProfileMutualContextSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureCell;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (struct UIEdgeInsets)inset;
- (id)initWithUserSession:(id)arg1 horizontalPadding:(double)arg2 inset:(struct UIEdgeInsets)arg3 analyticsModule:(id)arg4;

@end
