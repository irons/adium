//
//  PurpleAccountViewController.h
//  Adium
//
//  Created by Evan Schoenberg on 11/9/07.
//

#import <Adium/AIAccountViewController.h>

@interface PurpleAccountViewController : AIAccountViewController {
	IBOutlet	NSButton *checkBox_broadcastMusic;
}

- (NSMenu *)encodingMenu;

@end
