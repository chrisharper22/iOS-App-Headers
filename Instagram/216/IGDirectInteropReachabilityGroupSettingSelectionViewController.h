//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@protocol IGInteropReachabilityGroupSettingSelectionDelegate;

@interface IGDirectInteropReachabilityGroupSettingSelectionViewController : IGGroupedTableViewController
{
    long long _selectedOption;
    id <IGInteropReachabilityGroupSettingSelectionDelegate> _delegate;
    _Bool _enabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)_isOptionSectionSelected:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)toggleSelectedOption:(long long)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSelectedOption:(long long)arg1 delegate:(id)arg2;

@end

