//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGFBPageCrossPostSettingsManager : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_clearOldCrossPostStatus;
- (_Bool)_intervalElapsed;
- (void)didShareToFacebookPage:(_Bool)arg1;
- (void)didDismissToolTip;
- (void)didShowToolTip;
- (_Bool)shouldEnableSharing;
- (id)titleForTooltip;
- (_Bool)shouldShowTooltip;
- (void)_setLastCrossPostDateIfNecessary;
- (id)initWithUserSession:(id)arg1;

@end

