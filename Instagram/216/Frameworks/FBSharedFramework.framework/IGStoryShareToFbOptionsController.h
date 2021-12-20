//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGStoryShareToFbOptionsControllerDelegate;

@interface IGStoryShareToFbOptionsController : NSObject
{
    IGUserSession *_userSession;
    long long _surface;
    id <IGStoryShareToFbOptionsControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryShareToFbOptionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showDialog:(_Bool)arg1 withDialogBody:(id)arg2;
- (void)_setAutoCrossPosting:(_Bool)arg1 surface:(long long)arg2;
- (void)showNoHeaderShareOptionsActionSheetWithShare:(_Bool)arg1;
- (void)showShareOptionsActionSheetWithShare:(_Bool)arg1;
- (id)initWithSession:(id)arg1 surface:(long long)arg2;

@end
