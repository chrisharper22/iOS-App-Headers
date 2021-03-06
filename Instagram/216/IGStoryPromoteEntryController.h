//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGBoostPostLogger, IGUserSession, NSString, UIViewController;
@protocol IGStoryItemType;

@interface IGStoryPromoteEntryController : NSObject
{
    UIViewController *_viewController;
    IGUserSession *_userSession;
    id <IGStoryItemType> _storyItem;
    NSString *_mediaID;
    CDUnknownBlockType _cancelledHandler;
    IGBoostPostLogger *_logger;
}

- (void).cxx_destruct;
- (void)_openPromoteMediaPicker;
- (void)_openPromoteAppWithCouponOfferId:(id)arg1;
- (void)_showPromoteUnavailableReason;
- (void)openPromoteWithCouponOfferId:(id)arg1;
- (id)initWithViewController:(id)arg1 userSession:(id)arg2 storyItem:(id)arg3 entryPointName:(id)arg4 cancelledHandler:(CDUnknownBlockType)arg5;

@end

