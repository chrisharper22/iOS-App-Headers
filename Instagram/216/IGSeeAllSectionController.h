//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class FBViewpointAction, IGSeeAllItemConfiguration, IGUserSession, UIColor;
@protocol IGSeeAllSectionControllerDelegate;

@interface IGSeeAllSectionController : IGListSectionController
{
    IGSeeAllItemConfiguration *_itemConfiguration;
    IGUserSession *_userSession;
    id <IGSeeAllSectionControllerDelegate> _delegate;
    UIColor *_backgroundColor;
    FBViewpointAction *_impressionViewportAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBViewpointAction *impressionViewportAction; // @synthesize impressionViewportAction=_impressionViewportAction;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak id <IGSeeAllSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1;

@end
