/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AccountSettings/AccountsManager.h>

@interface AccountsManager (Private)
+ (unsigned int)currentVersion;
+ (id)fullPathToAccountSettingsPlist;
+ (void)_setShouldSkipNotifications:(BOOL)arg1;
- (id)initWithAccounsInfoArray:(id)arg1;
- (id)initInsideOfMigration;
- (unsigned int)dataVersion;
@end

