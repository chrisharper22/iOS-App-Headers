//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGLimitsSetting, IGUserDefaults, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGLimitsSettingModelDelegate;

@interface IGLimitsSettingModel : NSObject
{
    IGUserSession *_userSession;
    IGUserDefaults *_userSessionDefaults;
    NSArray *_allRows;
    IGLimitsSetting *_setting;
    NSMutableDictionary *_updatedValues;
    NSString *_sessionId;
    NSString *_module;
    _Bool _isEnabled;
    _Bool _isNonFollowerEnabled;
    _Bool _isNewFollowerEnabled;
    double _endTimestamp;
    double _startTimestamp;
    id <IGLimitsSettingModelDelegate> _delegate;
    long long _durationInDays;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long durationInDays; // @synthesize durationInDays=_durationInDays;
@property(nonatomic) __weak id <IGLimitsSettingModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_extraValueForStep:(unsigned long long)arg1;
- (void)_calculateDuratonInDays;
- (void)_updateCachedValuesWithDict:(id)arg1;
- (void)_updateLocalValues;
- (void)_updateCachedValuesWithModel;
- (void)_retrieveLastSavedValues;
- (void)_updateDuration:(id)arg1;
- (void)_updateSettingsWithDict:(id)arg1 step:(unsigned long long)arg2 enabledValue:(id)arg3;
- (_Bool)hasEnabledOneAccountTypeWithNewValue:(_Bool)arg1 forRow:(unsigned long long)arg2;
- (void)updateReminderDuration:(long long)arg1;
- (void)updateEnableState;
- (void)updateSwitchValue:(_Bool)arg1 forRow:(unsigned long long)arg2;
- (void)fetchSettings;
- (double)headerHeightForSection:(long long)arg1;
- (double)rowHeightForRow:(long long)arg1 InSection:(long long)arg2;
- (_Bool)showBottomBorderForRow:(unsigned long long)arg1;
- (unsigned long long)rowTypeForRow:(long long)arg1 inSection:(long long)arg2;
- (_Bool)isEnabled;
- (_Bool)footerButtonEnabled;
- (id)footerButtonText;
- (id)headerTitleForSection:(long long)arg1;
- (id)secondaryTextForRow:(long long)arg1 inSection:(long long)arg2;
- (id)primaryTextForRow:(long long)arg1 inSection:(long long)arg2;
- (_Bool)isSwitchOnForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithUserSession:(id)arg1 sessionId:(id)arg2 module:(id)arg3;

@end
